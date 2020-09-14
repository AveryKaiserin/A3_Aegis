@echo off
md temp
FOR /F "tokens=1* delims=. " %%A in ('dir /b *.paa') do (
"D:\Steam\steamapps\common\Arma 3 Tools\TexView2\Pal2PacE.exe" %%A.paa temp\%%A.tga
)
move temp\*.tga .
rd temp
pause
exit