#include "gpu.hpp"

gpu::gpu() {
	 this->backBuffer = new screenBuffer();
	 this->frontBuffer = new screenBuffer();
}
