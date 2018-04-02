This sample demonstrates how to create a desktop server component.

This sample is written in C# and requires Visual Studio 2017.


Start and select File > Open > Project/Solution.
Go to the directory where you downloaded sample. Go to the directory named for the sample, and double-click the Microsoft Visual Studio Solution (.sln) file.
Press F5 or use Build > Build Solution.

Note: Please refer to the [documentation](https://docs.microsoft.com/en-us/windows/uwp/winrt-components/brokered-windows-runtime-components-for-side-loaded-windows-store-apps) for complete instructions.

1. Build the BrokeredComponent - Server project.
2. Copy the _reference_ winmd file to the project directory of the BrokeredComponent - Client side-loaded project.
3. Open the BrokeredComponent - Client project, and add a reference to the reference winmd file you copied over to the project (Fabrikam.winmd).
4. Build the BrokeredComponent App solution.
5. The AppxManifest in BrokeredComponent App (Client) specifies the location of the Brokered component (c:\test). Copy the _implementation_ winmd file plus ancilliary files including BrokeredProxyStub.dll to c:\test. 
6. Register BrokeredProxyStub.dll with regsvr32 - regsvr32 c:\test\BrokeredProxyStub.dll
7. Enter the command: icacls ./T /grant *S-1-15-2-1:RX from the defined location of BrokeredProxyStub.dll (c:\test).
8. Launch BrokeredComponent App (Client).

