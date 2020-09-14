keyutils for Unikraft
=====================

This is the port of keyutils 1.6 for Unikraft as external library.

keyutils depends on libc(e.g. newlib), so please ensure you add the following line to the `LIBS` variable in the `Makefile`:
...$(UK_LIBS)/libkeyutils:$(UK_LIBS)/newlib...

Before you proceed to writing your own application, you can use the keyctl program from keyutils by enabling it in the configuration menu.

Please refer to the `README.md` as well as the documentation in the `doc/`
subdirectory of the main unikraft repository.
