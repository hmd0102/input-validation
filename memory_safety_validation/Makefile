CC=gcc
CFLAGS=-Wall

TARGETS=memory_safe memory_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
