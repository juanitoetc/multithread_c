# Multithread example
Simple multithread example in Linux
Tested on Ubuntu 18.04.4 LTS (Bionic Beaver)

## Installation
Nothing :)

## Compile
Run the manual commands to compile or use simple the Makefile

### Manual
`gcc src/basic.c -lpthread -o app/basic`
`gcc src/mutex.c -lpthread -o app/mutex`
`gcc src/args.c -lpthread -o app/args`

### Makefile
`make`

## Run
`apps/basic`
`apps/mutex`
`apps/args`

## Delete
`make clean`
