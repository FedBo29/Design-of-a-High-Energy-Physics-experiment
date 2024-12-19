# Tracking-detector
This is a Monte Carlo simulation of events generated after a particle collision.   
This project was an assignment for the exam in Nuclear Physics "Numeric Analysis and Simulation Technology" at University of Turin. 

The task was to generate, simulate and reconstruct the signal produced after a proton-proton collision.
The tracking system is composed by the beam pipe and two layers. 
After the simulation and the reconstruction, the tracking system has been analysed to evaluate its Efficiency.

The project has been implemented in C++ and launched with ROOT software by Cern. This software was thought to Nuclear Physics topics, but today it is used in several disciplines. 
The entire code is object-oriented with the creation of some custom classes used in the main macros. 

Hence, the work is divided into:

```
TRACKING - DETECTOR 
├─ Simulation
│  ├─ src
│  │  ├─ MyGex.cxx
│  │  ├─ MyIndex.cxx
│  │  ├─ MyInt.cxx
│  │  └─ MyScatter.cxx
│  ├─ include
│  │  ├─ MyGen.h
│  │  ├─ MyIndex.h
│  │  ├─ Myint.h
│  │  ├─ MyScatter.h
│  │  └─ heta2.root
│  ├─ MySimulation.cpp
│  ├─ compilemyclass.C
│  └─ README.md
├─ Reconstruction
│  ├─ src
│  │  ├─ MyIndex.cxx
│  │  └─ MyRec.cxx
│  ├─ include
│  │  ├─ MyIndex.h
│  │  └─ MyRec.h
│  ├─ MyReconstruction.cpp
│  ├─ compilemyclass.C
│  └─ README.md
├─ Analysis
│  ├─  MyGraph.cpp
│  ├─  README.md
│  ├─ analisiDistro.cpp
│  ├─ analisiMultUni.cpp
│  ├─ analisiZUni.cpp
│  ├─ readGraph.cpp
│  └─ residui.cpp
├─ Simulazione_di_un_rivelatore_di_vertice.pdf
└─ readme.md
```


The entire work has been done by Federico Bonaldo and Irene Amateis for the exam in Numeric Analysis and Simulation Technology in December 2022. 
