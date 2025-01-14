### Python code

There is a folder for each technique containing the following folders:
- **Test1** (using the Python interpreter without applying the technique)
- **Test2** (using the Python interpreter after applying the technique)
- **Test1_Nuitka** (using the Nuitka compiler without applying the technique)
- **Test2_Nuitka** (using the Nuitka compiler after applying the technique)

Each of these folders contains the code along with the `Makefile`, which includes the following commands to execute for running the tests:
- **configM**: Prepares the environment before the measurement.
- **run**: Runs the code.
- **endM**: Cleans the environment after the measurement.
