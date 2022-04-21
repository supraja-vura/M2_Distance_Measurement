DOXY_FILE = Distance_Measuring
BUILD_FILE = html

FixPath = $(subst /,\,$1)

doc:
	doxygen ./$(DOXY_FILE)

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)