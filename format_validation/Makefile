CC=gcc
CFLAGS=-Wall

TARGETS=format_safe format_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
