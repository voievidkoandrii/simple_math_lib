# simple_math_lib
Simple cpp math lib

## Dependencies ⚙️

For unit tests, gtest is used. However, there is no need to install it as the build process will handle everything automatically.

## Build  🛠️

1. Navigate to the root directory of the repository.

2. Create a build directory and navigate to it:

    ```console
    mkdir build && cd build
    ```

3. Run CMake to generate the build files:

    ```console
    cmake ..
    ```

4. Build the project:

    ```console
    cmake --build . --target Release
    ```

6. The built executable should now be located in the `build` directory.


## Using

After building, you will have two executable files: one for the testing `MathLibUnitTests` and the other for the short demonstration `MathLibExample`.