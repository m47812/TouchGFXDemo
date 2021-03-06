/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenright_screen/ScreenRightViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ScreenRightViewBase::ScreenRightViewBase() :
    buttonCallback(this, &ScreenRightViewBase::buttonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BG_RIGHT_ID));

    buttonLeft.setXY(7, 104);
    buttonLeft.setBitmaps(touchgfx::Bitmap(BITMAP_ARROW_LEFT_ID), touchgfx::Bitmap(BITMAP_ARROW_LEFT_GRAY_ID));
    buttonLeft.setAction(buttonCallback);

    imageProgress1.setXY(7, 152);
    imageProgress1.setProgressIndicatorPosition(2, 2, 180, 34);
    imageProgress1.setRange(0, 100);
    imageProgress1.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    imageProgress1.setBackground(touchgfx::Bitmap(BITMAP_IMAGE_PROGRESS_BACKGROUND_ID));
    imageProgress1.setBitmap(BITMAP_PROGRESS_STRIPE_ID);
    imageProgress1.setValue(60);
    imageProgress1.setAnchorAtZero(false);

    textArea1.setXY(90, 58);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    circleProgress1.setXY(204, 120);
    circleProgress1.setProgressIndicatorPosition(0, 0, 100, 100);
    circleProgress1.setRange(0, 100);
    circleProgress1.setCenter(52, 52);
    circleProgress1.setRadius(50);
    circleProgress1.setLineWidth(0);
    circleProgress1.setStartEndAngle(0, 360);
    circleProgress1.setBackground(touchgfx::Bitmap(BITMAP_CIRCLE_PROGRESS_BACKGROUND_ID));
    circleProgress1Painter.setBitmap(touchgfx::Bitmap(BITMAP_CIRCLE_PROGRESS_ID));
    circleProgress1.setPainter(circleProgress1Painter);
    circleProgress1.setValue(60);

    add(image1);
    add(buttonLeft);
    add(imageProgress1);
    add(textArea1);
    add(circleProgress1);
}

void ScreenRightViewBase::setupScreen()
{

}

void ScreenRightViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonLeft)
    {
        //Interaction1
        //When buttonLeft clicked change screen to ScreenCenter
        //Go to ScreenCenter with no screen transition
        application().gotoScreenCenterScreenNoTransition();
    }
}
