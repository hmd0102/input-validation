SUBDIRS = encoding_validation length_validation range_validation \
          state_validation format_validation memory_safety_validation \
          semantic_validation type_validation

all:
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir; done

clean:
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir clean; done
