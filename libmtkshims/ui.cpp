#include <ui/GraphicBufferMapper.h>
#include <ui/Rect.h>
#include <ui/PixelFormat.h>
#include <dlfcn.h>


extern "C" {
    void _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(buffer_handle_t, uint32_t, const android::Rect&, void**);

    void _ZN7android19GraphicBufferMapper4lockEPK13native_handleiRKNS_4RectEPPv(buffer_handle_t handle, int usage, const android::Rect& bounds, void** vaddr) {
        _ZN7android19GraphicBufferMapper4lockEPK13native_handlejRKNS_4RectEPPv(handle, static_cast<uint32_t>(usage), bounds, vaddr);
    }
    
    void _ZN7android11IDumpTunnel11asInterfaceERKNS_2spINS_7IBinderEEE(){};
    
    void _ZN7android13GraphicBufferC1Ejjij(void *instance, uint32_t inWidth, uint32_t inHeight, android::PixelFormat inFormat, uint32_t inUsage) {
        static void (*func)(void *instance, uint32_t, uint32_t, android::PixelFormat, uint32_t, std::string) = NULL;
		static void (*func2)(void *instance) = NULL;
		std::string my_requestorName("<Unknown>");

		func  = (void (*)(void *instance, uint32_t, uint32_t, android::PixelFormat, uint32_t, std::string))dlsym(RTLD_NEXT, "_ZN7android13GraphicBufferC1EjjijNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE");
		func2 = (void (*)(void *instance))dlsym(RTLD_NEXT, "_ZN7android13GraphicBufferC1Ev");

		func(instance, inWidth, inHeight, inFormat, inUsage, my_requestorName);
    }
}
