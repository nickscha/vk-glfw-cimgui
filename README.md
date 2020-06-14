# vk-glfw-cimgui

Pure C demo for Vulkan, GLFW3 and CIMGUI.

This is the C port of IMGUI examples (https://github.com/ocornut/imgui/tree/master/examples/example_glfw_vulkan)

## Build

```sh
  # Debug (dist/Debug/...)
  make
  
  # Release (dist/Release/...)
  make CONF=Release
```

## Example

![Vulkan,GLFW3,CIMGUI Demo Picture](vk-cimgui.png)

## Linker Libraries

-lvulkan-1 -lglfw3 -lcimgui -lstdc++ (needed for cimgui)