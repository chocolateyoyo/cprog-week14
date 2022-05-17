$cdir = Split-Path -leaf -path (Get-Location)
Write-Output "g++ -o main ./main.cpp"
Remove-Item main.exe
g++ -o main ./main.cpp
if ($?) {
    py -3 ../../tools/chk_$cdir.py $args[0]
} else {
    Write-Output ""
    Write-Output "Error while compiling ./main.cpp!" 
    Write-Output ""
}
