# COMPILING ALL SOURCES FILES FOR THE LIBRARY
```bash
    g++ -fPIC -c ./Geometry/source/*
```

# CREATING THE DYNAMIC LIBRARY
```bash
    g++ -o libgeometry.so -shared *.o
```

# MOVING THE `libgeometry.so`
```bash
    mv libgeometry.so ./GeometryDir/libDynamic
```

# CREATING THE FILE CONFIGURATION FOR THE LIBRARY
```bash
    sudo touch /etc/ld.so.conf.d/libgeometry.conf
    sudo echo "/home/toavina-jr/Documents/Mr_Tahiry/Devoir/GeometryDir/libDynamic" > /etc/ld.so.conf.d/libgeometry.conf
```

# UPDATING THE CONFIGURATION
```bash
    sudo ldconfig
```

# LINKING THE DYNAMIC LYBRARY WITH THE MY `geometryTest.cpp`
```bash
    g++ ./GeometryDir/geometryTest.cpp -L"./GeometryDir/static" -lgeometry -o dynamic.out
```
# EXECUTING THE OUTPUT FILE