CC=gcc
CFLAGS=-Wall

TARGETS=length_vuln length_vuln

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
