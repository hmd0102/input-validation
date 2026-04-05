CC=gcc
CFLAGS=-Wall

TARGETS=type_safe type_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
