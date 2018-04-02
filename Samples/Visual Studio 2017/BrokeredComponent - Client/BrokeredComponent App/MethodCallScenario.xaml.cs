//*********************************************************  

//  

// Copyright (c) Microsoft. All rights reserved.  

// This code is licensed under the MIT License (MIT).  

// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF  

// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY  

// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR  

// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.  

//  

//*********************************************************  

using System;
using System.Runtime.InteropServices.WindowsRuntime;
using System.Threading.Tasks;
using Windows.Foundation;
using Windows.UI.Core;
using Windows.UI.Xaml;
using Windows.UI.Xaml.Controls;
using Windows.UI.Xaml.Navigation;
using SDKTemplate;

using Fabrikam;

namespace BrokeredComponent_App
{
    /// <summary>
    /// An empty page that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MethodCallScenario
    {
        // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
        // as NotifyUser()
        MainPage rootPage = MainPage.Current;

        public MethodCallScenario()
        {
            this.InitializeComponent();
        }

        /// <summary>
        /// Invoked when this page is about to be displayed in a Frame.
        /// </summary>
        /// <param name="e">Event data that describes how this page was reached.  The Parameter
        /// property is typically used to configure the page.</param>
        protected override void OnNavigatedTo(NavigationEventArgs e)
        {
        }

        /// <summary>
        /// This is the click handler for the 'InvokeMethod' button.  
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void InvokeMethod_Click(object sender, RoutedEventArgs e)
        {
            Button b = sender as Button;
            if (b != null)
            {
                InvokeMethodOnServer();                    
            }
        }

        /// <summary>
        /// tests a simple method call to the desktop server
        /// </summary>
        private void InvokeMethodOnServer()
        {
            // NOTE: this must be used carefully.  Synchronous crossprocess calls must
            // execute extremely quickly so that the UI of the client application is not
            // hung or compromised.  In most cases, WinRT async methods are safest to write 
            // and call. But the code below illustrates the pattern to call a synchronous
            // method on the App Broker server from a background thread and use the
            // Dispatcher to update the UI.  
            Task.Run( async () =>
            {
                var list = App.Server.TestMethod("Hi");
                await Dispatcher.RunAsync(Windows.UI.Core.CoreDispatcherPriority.Normal, () =>
                {
                    foreach (string item in list)
                    {
                        ResultsList.Items.Add(item);
                    }
                });
            });
        }
    }
}
