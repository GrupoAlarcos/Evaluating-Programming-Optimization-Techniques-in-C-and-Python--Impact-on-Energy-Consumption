# Evaluating Programming Optimization Techniques in C and Python: Impact on Energy Consumption
[Carlos Pulido](https://orcid.org/0009-0008-8122-3500)  

[Félix García](https://orcid.org/0000-0001-6460-0353)

[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)

[Miguel Baños-González](https://orcid.org/0009-0000-5444-7631)

[Juan Antonio Rico-Gallego](https://orcid.org/0000-0002-4264-7473)

[Javier Corral-García](https://orcid.org/0000-0002-4682-9389)


## Abstract
Software plays a critical role in modern society, but its energy consumption is a growing concern. The Internet of Things (IoT) exemplifies this challenge, with billions of devices relying on C for energy efficiency. Outside the IoT domain, Python is becoming increasingly popular despite being one of the least energy-efficient programming languages (PLs). Optimization is therefore essential to reduce energy consumption in both cases: (i) in the IoT, where despite the use of C, the large number of devices leads to high energy consumption, and (ii) in Python, due to its high energy consumption. This paper evaluates 23 optimization techniques in C and Python, taking into account the choice of compiler (O0/O3 in C and Interpreter/Nuitka in Python). The results show that more techniques have a positive impact (reducing energy) in Python than in C, but the energy consumption of Python remains significantly higher, requiring further optimizations to narrow the gap.

## What is this?
This repository contains the results of 26 software optimization techniques implemented in C and Python.

- **C**: Evaluated with two compiler optimization levels: `-O0` and `-O3`.  
- **Python**: Tested using **CPython** and **Nuitka**.

The study focuses on analyzing and comparing the **energy efficiency** of these optimization techniques across the three languages and different compilation and runtime strategies.

## How is structured?
This repository contains one main folder: `programming_languages`.

### programming_languages
This folder contains one excel with the analysis of the 26 software optimization techniques.

Each programming language contains two folders:
   - `code`: Code for the 26 optimization techniques.  
   - `results`: Results obtained from applying these techniques, along with the impact of other compiler choices.

## Contacts
[Green Team Alarcos](https://greenteamalarcos.uclm.es/)

