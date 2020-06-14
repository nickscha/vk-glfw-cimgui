#ifndef IMGUI_IMPL_GLFW_H
#define IMGUI_IMPL_GLFW_H

#ifdef __cplusplus
extern "C" {
#endif
    
#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>
#include <GLFW/glfw3.h>

struct GLFWwindow;

CIMGUI_API bool     ImGui_ImplGlfw_InitForOpenGL(GLFWwindow* window, bool install_callbacks);
CIMGUI_API bool     ImGui_ImplGlfw_InitForVulkan(GLFWwindow* window, bool install_callbacks);
CIMGUI_API void     ImGui_ImplGlfw_Shutdown();
CIMGUI_API void     ImGui_ImplGlfw_NewFrame();

// GLFW callbacks
// - When calling Init with 'install_callbacks=true': GLFW callbacks will be installed for you. They will call user's previously installed callbacks, if any.
// - When calling Init with 'install_callbacks=false': GLFW callbacks won't be installed. You will need to call those function yourself from your own GLFW callbacks.
CIMGUI_API void     ImGui_ImplGlfw_MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
CIMGUI_API void     ImGui_ImplGlfw_ScrollCallback(GLFWwindow* window, double xoffset, double yoffset);
CIMGUI_API void     ImGui_ImplGlfw_KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);
CIMGUI_API void     ImGui_ImplGlfw_CharCallback(GLFWwindow* window, unsigned int c);

#ifdef __cplusplus
}
#endif

#endif /* IMGUI_IMPL_GLFW_H */

