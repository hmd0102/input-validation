CC=gcc
CFLAGS=-Wall

TARGETS=encoding_safe encoding_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
