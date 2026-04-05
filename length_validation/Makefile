CC=gcc
CFLAGS=-Wall

TARGETS=length_safe length_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
