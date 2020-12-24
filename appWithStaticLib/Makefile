MODULES = encoderlib encoderapp decoderapp
all:
	for dir in $(MODULES); do \
		(cd $$dir; ${MAKE}); \
	done
