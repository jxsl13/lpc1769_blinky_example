#pragma once

#include <hal/Interrupt.hpp>
#include "Interrupt.hpp"


namespace holmes
{
    using DeviceSTM32F407VG = internal::DeviceSTM32F407VG;
    using IRQType = internal::IRQType;

    using VectorTable = internal::InterruptVectorTable<DeviceSTM32F407VG, DeviceSTM32F407VG::ValueTypeUnsigned, IRQType>;

	struct instances
	{
		// <auto-generated>
        static auto vectorTable()   -> VectorTable& { return VectorTable::getInstance(); };
		// </auto-generated>
	};

	auto init() -> void;

}