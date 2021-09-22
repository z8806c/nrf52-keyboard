# 描述
- 5x14的60%键盘
- 一个Caps灯和一个RGB状态指示灯
- Type-C接口
- 蓝牙主控为nRF52832
- 拨动开关


# 配置键盘与更改按键配置
方式一：在线配置
https://keyboard.lotlab.icu/
(先看帮助,安装对应的本地服务器)

方式二：本地配置工具
[Lkb_configurator](https://raw.githubusercontent.com/z8806c/nrf52-keyboard/master/lkb_configurator/lkb_configurator_setup_1.0.2.0.exe)
(无需网络,仅支持WIN)

# 系统功能按键说明
在没有USB接入时，按键空闲15秒进入慢速扫描状态，600秒自动进入休眠。
自动休眠后按任意按键即可唤醒；手动休眠后需要组合键开机，插入USB也可以唤醒设备。

<table>

<thead>
<tr>
<th>功能</th>
<th>按键</th>
<th>功能说明</th>
</tr>
</thead>

<tr>
<td>开机</td>
<td><kbd>Space</kbd>+<kbd>U</kbd></td>
<td>开启设备。</td>
</tr>

<tr>
<td>休眠</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>P</kbd></td>
<td>手动进入休眠模式。</td>
</tr>



<tr>
<td>有线/无线切换</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>M</kbd></td>
<td>在USB和无线同时工作时，可以切换有线/无线模式。</td>
</tr>

<tr>
<td>切换蓝牙设备</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>Q</kbd>/<kbd>W</kbd>/<kbd>E</kbd></td>
<td>可以在已绑定的蓝牙设备之间进行切换，<kbd>Q</kbd>/<kbd>W</kbd>/<kbd>E</kbd>代表不同蓝牙连接通道</td>
</tr>


<tr>
<td>重启蓝牙广播</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>R</kbd></td>
<td>重新开启蓝牙广播，用于切换设备后进行绑定。</td>
</tr>


<tr>
<td>清空当前蓝牙绑定</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>O</kbd></td>
<td>清空当前蓝牙设备绑定信息。仅清空当前设备，其余绑定设备不会清空。</td>
</tr>

<tr>
<td>输出电量</td>
<td><kbd>Lshift</kbd>+<kbd>Rshift</kbd>+<kbd>H</kbd></td>
<td>通过键盘输出当前键盘剩余电量。可能无法达到 100% 或者 数值有所波动，这是正常现象。</td>
</tr>


</table>


# RGB指示灯颜色表

<table>

<thead>
<tr>
<th>颜色</th>
<th>状态</th>
</tr>
</thead>


<tr>
<td>白色</td>
<td>无连接</td>
</tr>

<tr>
<td>青色</td>
<td>蓝牙已连接</td>
</tr>

<tr>
<td>天蓝色</td>
<td>USB已连接</td>
</tr>

<tr>
<td>黄色</td>
<td>输入配对密码</td>
</tr>

<tr>
<td>紫红色</td>
<td>配对密码输入完毕</td>
</tr>

<tr>
<td>紫色</td>
<td>休眠</td>
</tr>


</table>
