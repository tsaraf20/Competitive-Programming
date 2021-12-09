[CmdletBinding()]
param (
    [Parameter(Mandatory)]
    [string]
    $FilePath
)

Invoke-Expression "g++ $FilePath; .\a.exe"