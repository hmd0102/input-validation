CC=gcc
CFLAGS=-Wall

TARGETS=semantic_safe semantic_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
