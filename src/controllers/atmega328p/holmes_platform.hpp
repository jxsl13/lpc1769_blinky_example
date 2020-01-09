#pragma once

#include <stdint.h>
#include <hal/Interrupt.hpp>
#include "Interrupt.hpp"





namespace holmes
{
    using DeviceAtMega328p = internal::DeviceAtMega328p;
    using IRQType = internal::IRQType;

    using VectorTable = internal::InterruptVectorTable<DeviceAtMega328p, uint8_t, IRQType>;

	struct instances
	{
		// <auto-generated>
        static auto vectorTable()   -> VectorTable& { return VectorTable::getInstance(); };
		// </auto-generated>
	};

	auto init() -> void;

}