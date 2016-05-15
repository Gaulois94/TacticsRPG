#include "nativeTacticsRenderer.h"
#include "utils.h"

JNIEXPORT jlong JNICALL Java_com_gaulois94_TacticsRenderer_createTacticsRenderer(JNIEnv* jenv, jclass jcls, jlong parent, jobject surface)
{
	JniMadeOf::jenv = jenv;
	TacticsRenderer* renderer = new TacticsRenderer((Updatable*)parent);
	ANativeWindow* window = ANativeWindow_fromSurface(jenv, surface);
	renderer->initializeContext();
	renderer->initializeSurface(window);

	return (jlong)renderer;
}
