#Getting Started

## Creating a New Project
1. Clone the EasyPIC project
'''sh
git clone blah blah blah
'''
2. Open MPLABX
3. Select **File->New Project**
4. Select **Microchip Embedded** from the <i>Categories</i> window and **Standalone Project** from the <i>Projects</i> window and click **Next**
5. Select your device and click **Next**
6. Select your programmer and click **Next**
7. Select your compiler toolset and click **Next**
8. Enter a name for your project and a location.  It's easiest if the location is within the directory where you cloned the EasyPIC project.
9. Click **Finish**
10. On the **Projects** tab find your newly created project and right-click on <i>Source Files</i>.  Select **Add Existing Items from Folders...**
11. Add the **modules** folder and the **app** folder from the EasyPIC project and click **Add**.  This will add all files under the <i>Source Files</i> folder in your project view.  That is fine but if it bothers you that the header files aren't under the <i>Header Files</i> folder you are welcome to move them.  It will not affect the behavior of the project.

That's it.  You should now attempt to build the project without making any changes.  Several  compiler errors will be presented to you as a guide of what steps need to be completed next.  The idea is that by fixing the user-defined compiler errors you will reach a point where the base EasyPIC project compiles correctly and will run on your target device.  After the compiler errors have been resolved you can begin writing your project code in app.c.

## Adding Modules
The basic project isn't very interesting by itself but it helps you understand the philosophy behing the EasyPIC project which is to create code modules in such a way that by correcting a serious of helpful user-defined compiler errors you are guided to a working implementation.

Adding modules to the project is a simple process that is a lot like the initial project setup.

<i>ADD MORE INFO HERE</i>
