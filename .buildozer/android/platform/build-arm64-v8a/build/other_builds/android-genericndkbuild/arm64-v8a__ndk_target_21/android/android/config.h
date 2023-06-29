#define BOOTSTRAP "webview"
#define IS_SDL2 0
#define PY2 0
#define JAVA_NAMESPACE "org.kivy.android"
#define JNI_NAMESPACE "org/kivy/android"
#define ACTIVITY_CLASS_NAME "org.kivy.android.PythonActivity"
#define ACTIVITY_CLASS_NAMESPACE "org/kivy/android/PythonActivity"
#define SERVICE_CLASS_NAME "org.kivy.android.PythonService"
JNIEnv *WebView_AndroidGetJNIEnv(void);
#define SDL_ANDROID_GetJNIEnv WebView_AndroidGetJNIEnv
