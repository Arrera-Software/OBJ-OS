# CMakeList.txt : projet CMake pour OBJ-OS, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (OBJ-OS "OBJ-OS.cpp" "OBJ-OS.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET OBJ-OS PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
