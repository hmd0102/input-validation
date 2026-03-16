CC=gcc
CFLAGS=-Wall

TARGETS=range_safe range_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
