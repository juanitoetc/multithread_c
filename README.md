# Multithread example
Simple multithread example in Linux
Tested on Ubuntu 18.04.4 LTS (Bionic Beaver)

basic: Contains sintaxis example and comments to understand.
mutex: Use a mutex to avoid racing condition on 2 or more threads running

## Installation
Nothing :)

## Compile
Run the manual commands to compile or use simple the Makefile

### Manual
`gcc src/basic.c -lpthread -o app/basic`
`gcc src/mutex.c -lpthread -o app/mutex`

### Makefile
`make` to compile all the examples, or write the desired one after.
`make basic`
`make mutex`
...

## Run
`apps/basic`
`apps/mutex`

## Delete
`make clean`
