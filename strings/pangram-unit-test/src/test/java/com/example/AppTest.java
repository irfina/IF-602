package com.example;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;

import org.junit.Test;

/**
 * Unit test for simple App.
 */
public class AppTest 
{
    /**
     * Rigorous Test :-)
     */
    @Test
    public void shouldAnswerWithTrue()
    {
        assertTrue( true );
    }

    @Test
    public void pangramIsFalse()
    {
        var app = new App();
        var result = app.isPangram("abc");
        assertFalse(result);
    }

    @Test
    public void pangramIsTrue()
    {
        var app = new App();
        var result = app.isPangram("the quick brown fox jumps over the lazy dog");
        assertTrue(result);
    }
}
