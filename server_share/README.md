# server_share

This directory contains shared server-side components and utilities for the project. It includes:

- **Service Interfaces:** C++ and XML interface definitions for various server services (e.g., backup, chat, command execution, login, logger, mail/forum).
- **Game Logic Modules:** Source and header files for gameplay features such as animal hunger, combat state, creature size, effect management, and more.
- **Logging:** Modules for logging different aspects of the game (character, chat, command, item, outpost, player, ring).
- **Utility Classes:** Helpers for database access, entity location, event reporting, and primitive configuration.
- **CMakeLists.txt:** Build configuration for integrating these sources into the larger project.

Most files are organized as pairs of `.cpp` and `.h` files, with some additional `.xml` and `.php` interface definitions.
