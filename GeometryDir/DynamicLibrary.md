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
    echo "/home/toavina-jr/Documents/Mr_Tahiry/Devoir/GeometryDir/libDynamic" > /etc/ld.so.conf.d/libgeometry.conf
```

