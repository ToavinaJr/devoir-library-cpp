# WORKING DIRECTORY IS `DEVOIR`

# COMPILING ALL SOURCES FILES FOR THE LIBRARY
```bash
    g++ -c ./GeometryDir/source/*
```

# CREATING THE STATIC LIBRARY
```bash
    ar -rv libgeometry.a *.o
```

# MOVING THE STATIC LIIBRARY
```bash
    mv libgeometry.a ./GeometryDir/libStatic
```

# LINKING `geometryTest.cpp` WITH THE STATIC LIBRARY
```bash
    g++ ./GeometryDir/geometryTest.cpp -L"./GeometryDir/libStatic" -lgeometry -o static.out
```
