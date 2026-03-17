# 🎨 Computer Graphics using OpenGL (FreeGLUT)

This repository contains implementations of fundamental **computer graphics algorithms** using **OpenGL (FreeGLUT)** in C++.

It is designed for students and beginners to understand core graphics concepts and visualize them.

---

## 📚 Programs Included

- ✅ DDA Line Drawing Algorithm
- ✅ Bresenham Line Algorithm
- ✅ Circle Drawing (Midpoint)
- 🔜 More coming soon...

---

## ⚙️ Requirements

- Windows OS
- MinGW (GCC/G++)
- OpenGL libraries
- FreeGLUT

---

## 🧩 Installation Setup (Windows)

Follow these steps carefully.

---

### 1. Install MinGW (G++ Compiler)

1. Download MinGW
2. Install and select:
   - `mingw32-gcc-g++`
3. Add to PATH:

---

### 2. Download FreeGLUT

1. Download FreeGLUT (precompiled for Windows)
2. Extract the folder

You will find:

```
include/
lib/
bin/
```

---

### 3. Copy Required Files

### 🔹 Header Files

Copy:

```
include/GL/*
```

To:

```
C:\MinGW\include\GL
```

---

### 🔹 Library Files

Copy:

```
lib/freeglut.a
lib/freeglut.dll.a
```

To:

```
C:\MinGW\lib
```

---

### 🔹 DLL File (IMPORTANT)

Copy:

```
bin/freeglut.dll
```

To:

```
C:\Windows\System32
```

OR place it in your project folder.

---

### 4. Compile Program

Use this command:

```bash
g++ filename.cpp -o output -lfreeglut -lopengl32 -lglu32
```

Example:

```bash
g++ dda.cpp -o dda -lfreeglut -lopengl32 -lglu32
```

---

### 5. Run Program

```bash
./output
```

Example:

```bash
./dda
```

---

## 🧠 Common Errors & Fixes

### ❌ `GL/glut.h not found`

✔ Fix: Ensure headers are in `C:\MinGW\include\GL`

---

### ❌ `freeglut.dll missing`

✔ Fix:

- Place `freeglut.dll` in:
    - `C:\Windows\System32`
    - OR project folder

---

### ❌ Line not visible / too small

✔ Fix:

- Adjust projection:
    
    ```cpp
    gluOrtho2D(0, 50, 0, 50);
    ```
    
- OR use larger coordinates

---

## 🚀 Future Improvements

- ✨ Animations
- ✨ 2D Transformations
- ✨ Clipping Algorithms
- ✨ Interactive graphics

---

## 🤝 Contributing

Contributions are welcome. Feel free to fork and submit a pull request.

---

## 📌 Author

Harsh
