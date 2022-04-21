#include "display.h"
#include "project_config.h"
#include "user_utils.h"
static volatile int pulse = 0;
static volatile int i = 0;

int main(void)
{
    
    DDRB = 0xFF;
    DDRD = 0b11111011;
    delay_ms(50);
    MCUCR|=(1<<ISC00);
    
    TCCR1A = 0;
    
    int16_t COUNTA = 0;
    char SHOWA [16];

    send_a_command(0x01); //Clear Screen 0x01 = 00000001
    delay_ms(50);
    send_a_command(0x38);
    delay_ms(50);
    send_a_command(0b00001111);
    delay_ms(50);
    
    sei();
    
    while(1)
    {
        PORTD|=(1<<PIND0);
        delay_us(15);
        PORTD &=~(1<<PIND0);
        
        COUNTA = pulse/58;
        send_a_string ("CIRCUIT DIAGRAM");
        send_a_command(0x80 + 0x40 + 0);
        send_a_string ("DISTANCE=");
        itoa(COUNTA,SHOWA,10);
        send_a_string(SHOWA);
        send_a_string ("cm    ");
        send_a_command(0x80 + 0);

    }
}

ISR(INT0_vect)
{
    if (i==1)
    {
        TCCR1B=0;
        pulse=TCNT1;
        TCNT1=0;
        i=0;
    }
    if (i==0)
    {
        TCCR1B|=(1<<CS10);
        i=1;
    }
}