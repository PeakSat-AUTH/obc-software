#include "CANTestTask.hpp"
#include "CANGatekeeperTask.hpp"

void CANTestTask::execute() {
    CAN::Application::switchBus(CAN::Driver::Main);
//    CAN::Frame message = {};
//
//    /**
//     * Simple 64 byte message sending
//     */
//    message.id = 0x10A;
//    for (uint8_t idx = 0; idx < CAN::Frame::MaxDataLength; idx++) {
//        message.data.push_back(idx);
//    }
//
//    while (true) {
//        canGatekeeperTask->send(message);
//        vTaskDelay(pdMS_TO_TICKS(1000));
//    }

    /**
     * Ping messages to OBC
     */
//    while (true) {
//        CAN::Application::sendPingMessage(CAN::Application::NodeIDs::OBC, false);
//        vTaskDelay(pdMS_TO_TICKS(1000));
//    }

    /**
     * Housekeeping parameters sending
     */
//    while (true) {
//        CAN::Application::createSendParametersMessage(CAN::Application::NodeIDs::OBC, false, {2, 7}, false);
//        vTaskDelay(pdMS_TO_TICKS(1000));
//    }

    /**
     * Log messages utilizing multiple messages
     */
    etl::array<uint16_t, CAN::TPMessageMaximumArguments> parameterIDs = {2000, 2001, 2002, 2003, 2004};
    while (true) {
        const String<ECSSMaxMessageSize> logString = "Never gonna give you up, never gonna let you down";
        CAN::Application::createLogMessage(CAN::NodeIDs::COMMS, false, logString, false);
        vTaskDelay(pdMS_TO_TICKS(500));
//        CAN::Application::createRequestParametersMessage(CAN::NodeIDs::COMMS, false, parameterIDs, false);
//        vTaskDelay(pdMS_TO_TICKS(500));
//        CAN::Application::sendPingMessage(CAN::NodeIDs::COMMS, false);
//        vTaskDelay(pdMS_TO_TICKS(500));
    }
}