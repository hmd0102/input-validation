CC=gcc
CFLAGS=-Wall

TARGETS=state_safe state_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
