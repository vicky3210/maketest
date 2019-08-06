## Steps

```shell
mkdir .vscode bin build include src  
cd ../src
touch main.cpp utils.cpp
cd ..
touch include/utils.h

cd ../.vscode
touch c_cpp_properties.json launch.json settings.json tasks.json
```

## 安装cmake

cmake是一个跨平台的安装(编译)工具, 可以用简单的语句来描述所有平台的安装(编译过程).

Ubuntu下安装 :

```shell
sudo apt-get install cmake cmake-gui

cmake --version
```