## Authors: Micheal Sukkarieh, Brendan Kellam, Karl Godin


# Sets the compilation flags to report all warnings and enable debugging in the generated
# object files and executable
set( CMAKE_C_FLAGS "-Wall -g")

# Add the file types .c .h .cpp .hpp to SRCS variable
file( GLOB SRCS *.c *.h *.cpp *.hpp)

# create a new executable
add_executable( exec ${SRCS} )