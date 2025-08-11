# Ryzom AI Share

This directory contains shared AI components and utilities used across various AI-related services in the Ryzom server. The modules here provide common data structures, message formats, event handling, and helper functions to support AI logic, communication, and world representation.

## Structure

- **ai_actions\***: Definitions and implementations of AI actions and commands.
- **ai_event\***: Event handling, reporting, and description for AI systems.
- **ai_aiming_type\***: Types and logic related to AI aiming behaviors.
- **ai_alias_description_node\***: Structures for describing AI alias nodes.
- **ai_primitive_parser\***: Utilities for parsing primitive AI data.
- **ai_spawn_commands\***: Commands and logic for spawning AI entities.
- **ai_types.h / ai_vector.h / angle.h**: Common AI data types, vectors, and angle utilities.
- **ai_share.h**: Main header for shared AI definitions.
- **world_map\***: Logic and data structures for representing the game world map.
- **aids_messages.h / ais_messages.h**: Message definitions for AI data and service communication.
- **16x16_layer\***: Utilities for handling layered map data.
- **static_vector.h**: Static vector implementation for efficient data storage.
- **ai_wrapper_server.cpp**: Server-side wrapper utilities for AI.

## Purpose

These shared modules provide foundational building blocks for AI logic, enabling code reuse and consistent communication between different AI services and components within the Ryzom