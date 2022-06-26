Release目录中的二进制文件是我已经编译好的版本, 不用额外设置可以直接使用

但如果你要自己编译的话, 需要注意以下问题来保证良好的体验:

# 屏蔽控制台黑窗口

link时增加参数 `-mwindows`, 如:

```bash
g++.exe  -o BurpLoader.exe main.o  -mwindows
```

# 设置exe图标

自己新建一个res.rc资源文件，文本编辑插入一行：

```rc
MAINICON ICON "自己喜欢的图标.ico"
```