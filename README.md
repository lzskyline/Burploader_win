# 如何设置exe图标

自己新建一个res.rc资源文件，文本编辑插入一行：

```rc
MAINICON ICON "自己喜欢的图标.ico"
```

# 如何屏蔽控制台界面

link时增加参数 `-mwindows`, 如:

```bash
g++.exe  -o BurpLoader.exe main.o  -mwindows
```