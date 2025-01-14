# Evaluating Programming Optimization Techniques in C and Python: Impact on Energy Consumption
[Carlos Pulido](https://orcid.org/0009-0008-8122-3500)  

[Félix García](https://orcid.org/0000-0001-6460-0353)

[Mª Ángeles Moraga](https://orcid.org/0000-0001-9165-7144)

[Coral Calero](https://orcid.org/0000-0003-0728-4176)

[Miguel Baños-González](https://orcid.org/0009-0000-5444-7631)

[Jorge Cancho-Casado](https://orcid.org/0009-0004-4501-4657)

[Javier Corral-García](https://orcid.org/0000-0002-4682-9389)


## Abstract
Software plays a critical role in modern society, but its energy consumption has become a growing concern. The Internet of Things (IoT) is an example of this challenge, with billions of connected devices worldwide relying on software to operate. These devices rely heavily on C programming language for its energy efficiency and low-level control of system resources. However, outside the IoT domain, other programming languages such as Python have become increasingly popular, despite being one of the least energy-efficient options. Given the significant impact of software on energy consumption, optimization efforts are essential to minimize energy consumption in both contexts: (i) in the IoT environment, where despite the use of an energy-efficient language such as C, the large number of devices leads to high energy consumption; and (ii) in the case of Python, due to its popularity and relatively higher energy consumption compared to other programming languages. Therefore, this paper evaluates 26 software optimization techniques implemented in C and their equivalents in Python, along with the impact of other compiler choices: the level of optimization in C and the use of the Nuitka compiler in Python. The results show the impact of each optimization technique, with more techniques having a positive effect in Python than in C. However, Python's overall energy consumption remains much higher, suggesting that further optimization is needed to close the gap between the two programming languages.

## What is this?
The repository contains the results of 26 optimization techniques implemented in C and Python, obtained using the hardware measurement instrument EET.

## Contacts
[Green Team Alarcos](https://greenteamalarcos.uclm.es/)
