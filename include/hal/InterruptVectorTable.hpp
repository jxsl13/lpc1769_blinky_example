#pragma once

namespace holmes
{
namespace internal
{

/**
 * @brief Contains every available ResultType/Index sorted by value!
 */
template <class Impl, class IRQType>
class InterruptVectorTable
{
    /**
     * @brief 
     * Singleton design pattern:
     * https://stackoverflow.com/questions/1008019/c-singleton-design-pattern
     * 
     * Info:
     * Each specialization of this template is supposed to implement an enum class with the form:
     * enum class IRQType : ResultType;
     * 
     * Abstracts the interrupt vector table into some basic functions.
     */

   private:
    /**
     * @brief Construct a new Interrupt Vector Table object
     */
    InterruptVectorTable();

   public:

    /**
     * @brief Deleted copy constructor
     */
    InterruptVectorTable(InterruptVectorTable const&) = delete;

    /**
     * @brief Deleted asignment operator
     */
    void operator=(InterruptVectorTable const&) = delete;

    /**
     * @brief Get the Singleton instance
     * Aftr this instance has ben created, interrupts are enabled by default.
     * 
     * @return InterruptVectorTable& 
     */
    static auto getInstance() -> InterruptVectorTable&;

    /**
     * @brief set specific interrupt service routine for the corresponding interrupt index.
     * @param InterruptIndex valid enum value, invalid value caught at compile time.
     * @param Callback Function to be called, when the Interrupt is 
     */
    auto setISR(IRQType InterruptIndex, void (*Callback)(void)) -> void;

    /**
     * @brief Enables interrupts globally
     */
    auto enableIRQ() -> void;

    /**
      * @brief Disables Interrupts globally.
      */
    auto disableIRQ() -> void;

    /**
      * @brief Returns whether interrupts are globally enabled.
      * 
      * @return true global interrupts are enabled
      * @return false global interrupts are disabled.
      */
    auto isEnabledIRQ() -> bool;

    /**
      * @brief Disable interrupt at given InterruptIndex
      * 
      * @param InterruptIndex interrupt InterruptIndex, as defined in the manuals: >= 0
      */
    auto enableISR(IRQType InterruptIndex) -> void;

    /**
      * @brief Disable an interrupt / interrupt service routine
      * 
      * @param InterruptIndex Is the InterruptIndex of the interrupt within the interrupt vctor table. 
      *              Should be a ResultType greater than or equal to 0.
      */
    auto disableISR(IRQType InterruptIndex) -> void;

    /**
      * @brief Check if an Interrupt Service Routine is enabled or not.
      * 
      * @param InterruptIndex 
      * @return true Interrupt Service routine is enabled.
      * @return false Interrupt Service routine is not enabled.
      */
    auto isEnabledISR(IRQType InterruptIndex) -> bool;

    /**
      * @brief Triggers a software interrupt request
      * 
      * @param InterruptIndex 
      */
    auto triggerISR(IRQType InterruptIndex) -> void;

    /**
      * @brief Wait until an interrupt is triggered.
      * Info: 
      * - If the microcontroller supports events, basically signals that 
      *   do not execute any interrupt service routine, then those microcontrollers
      *   should also stop their waiting, if an event is triggered.
      * - This function enables interrupts before entering a sleep state.
      */
    auto waitForIRQ() -> void;
};

} // namespace internal
} // namespace holmes
