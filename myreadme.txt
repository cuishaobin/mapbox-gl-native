1、注意事项：
v4.2.0需要基于xcode9.x版本构建，xcode10和v4.2.0的build不兼容。
本地亲测xcode9.4版本OK，其他版本未测试。

2、静态库出包：
make ipackage-strip-static BUILDTYPE=Release

3、动态库+静态库出包：
make ipackage-strip BUILDTYPE=Release

4、其他
截止2019年5月1日
v4.9.0可以和xcode10.2一起build