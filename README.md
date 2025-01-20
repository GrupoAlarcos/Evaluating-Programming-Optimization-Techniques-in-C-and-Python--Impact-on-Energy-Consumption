# Evaluating Programming Optimization Techniques in C and Python: Impact on Energy Consumption
[Carlos Pulido](https://orcid.org/0009-0008-8122-3500)  

[Félix García](https://orcid.org/0000-0001-6460-0353)

[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)

[Coral Calero](https://orcid.org/0000-0003-0728-4176)

[Miguel Baños-González](https://orcid.org/0009-0000-5444-7631)

[Jorge Cancho-Casado](https://orcid.org/0009-0004-4501-4657)

[Javier Corral-García](https://orcid.org/0000-0002-4682-9389)


## Abstract
Software plays a critical role in modern society, but its energy consumption has become a growing concern. The internet of things (IoT) exemplifies this challenge, with billions of devices relying on C programming language (PL) for energy efficiency and low-level system control. However, outside the IoT domain, other PLs such as Python have become increasingly popular, despite being one of the least energy-efficient options. Given the significant impact of software on energy consumption, optimization efforts are essential to minimize energy consumption in both contexts: (i) in the IoT environment, where despite the use of an energy-efficient language such as C, the large number of devices leads to high energy consumption; and (ii) in the case of Python, due to its popularity and relatively higher energy consumption compared to other PLs. Therefore, this paper evaluates the energy impact of 26 optimization techniques implemented in C and their equivalents in Python, along with the impact of compiler choices: the level of optimization in C (O0 and O3) and the use of the Nuitka compiler in Python. The results show a representative set of optimization techniques with a positive impact on energy, with a higher number of techniques with a positive effect in Python than in C. However, the overall energy consumption in Python is still much higher than in C, suggesting that more specific optimization effort is needed in this language to reduce the gap between them.

## What is this?
This repository contains the results of 26 software optimization techniques implemented in C and their equivalents in Python, along with the impact of other compiler choices: the level of optimization in C (O0 and O3) and the use of the Nuitka compiler in Python.

## How is structured?
This repository contains one main folder: `programming-languages`.

### programming-languages
This folder contains two Excel files: the first includes the analysis of the 26 software optimization techniques implemented in C and their equivalents in Python, along with the impact of other compiler choices; the second file contains the Mann-Whitney U Test analysis comparing the programming languages C and Python.

Each programming language contains two folders:
   - `code`: Code for the 26 optimization techniques.  
   - `results`: Results obtained from applying these techniques, along with the impact of other compiler choices.

## Contacts
[Green Team Alarcos](https://greenteamalarcos.uclm.es/)
