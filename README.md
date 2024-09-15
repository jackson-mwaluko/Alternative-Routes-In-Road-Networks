# Alternative-Routes-OpenGL-
# Alternative-Routes in Road Networks


Alternative-Routes is a C++ project that explores efficient route planning in road networks. The goal is to find alternative routes that optimize travel time, considering real-time traffic conditions. This project leverages Dijkstra's shortest path algorithm and incorporates collision avoidance techniques for a more realistic simulation.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

In urban environments, traffic congestion is a common issue. Finding the quickest route from point A to point B can be challenging due to various factors such as road closures, accidents, and rush hour. Alternative-Routes aims to address this problem by providing users with multiple route options based on real-time traffic data.

Key components of the project:

1. **Dijkstra's Algorithm**: We use Dijkstra's algorithm to compute the shortest path between the source and destination nodes. This algorithm efficiently explores the road network, considering edge weights (travel time) and dynamically adjusting the path as traffic conditions change.

2. **Random Traffic Generation**: To simulate real-world scenarios, we generate random traffic conditions across the road network. Vehicles move at varying speeds, encounter obstacles, and affect overall traffic flow.

3. **Collision Avoidance**: Our simulation incorporates collision avoidance techniques. Vehicles adjust their speeds dynamically to prevent collisions, ensuring a safer and more realistic experience.

4. **C++ and OpenGL**: The project is implemented in C++ and utilizes the OpenGL library for visualization. The graphical interface displays the road network, vehicles, and alternative routes.

## Features

- **Route Optimization**: Find the fastest route from source to destination.
- **Real-Time Traffic Simulation**: Randomly generated traffic conditions affect travel times.
- **Collision Avoidance**: Vehicles adjust speeds to avoid collisions.
- **Interactive Visualization**: View the road network and alternative routes using OpenGL.

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/Alternative-Routes.git
   ```

2. Build the project using your preferred C++ compiler (e.g., g++, Visual Studio).

## Usage

1. Compile the code:

   ```bash
   g++ main.cpp -o AlternativeRoutes
   ```

2. Run the executable:

   ```bash
   ./AlternativeRoutes
   ```

3. Follow the on-screen instructions to input source and destination nodes.

## Contributing

Contributions are welcome! If you'd like to enhance the project or fix any issues, feel free to submit a pull request.
